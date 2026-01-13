using System;
using System.Linq;
using System.Reflection;

class Program
{
    static void Main(string[] args)
    {
        while (true)
        {
            var examples = Assembly.GetExecutingAssembly()
                .GetTypes()
                .Where(t => typeof(IExample).IsAssignableFrom(t)
                            && !t.IsInterface
                            && !t.IsAbstract)
                .Select(t => (IExample)Activator.CreateInstance(t)!)
                .OrderBy(e => e.Name)
                .ToList();

            Console.WriteLine("==== 예제 런처 ====");
            for (int i = 0; i < examples.Count; i++)
                Console.WriteLine($"{i + 1}) {examples[i].Name} ({examples[i].GetType().Name})");
            Console.WriteLine("0) 종료");
            Console.Write("선택: ");

            var input = Console.ReadLine();
            if (input == "0") break;

            if (!int.TryParse(input, out int choice) || choice < 1 || choice > examples.Count)
            {
                Console.WriteLine("잘못된 입력. 엔터.");
                Console.ReadLine();
                Console.Clear();
                continue;
            }

            Console.Clear();
            examples[choice - 1].Run();
            Console.WriteLine("\n엔터 누르면 메뉴로...");
            Console.ReadLine();
            Console.Clear();
        }
    }
}
