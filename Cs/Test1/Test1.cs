using System;

namespace Test1
{
    class Test1
    {
        enum list
        {
            i = 1,
            j = 2,
            k = 3
        }
        static void Main(string[] args)
        {
            int count = 5;
            while (count>0)
            {
                Console.WriteLine("tlqkf");
                count--;
                if (count == 3)
                {
                    break;
                }
            }
            do
            {
                Console.WriteLine("에라이");
                count--;
            } while (count > 0);
            string answer;
            do
            {
                Console.Write("트릭컬에 돈 지를거임? (y/n) : ");
                answer = Console.ReadLine();
                if (answer == "y")
                {
                    Console.WriteLine("돈 없는데");
                }
            } while (answer != "y");
            for(int i = 0; i < 5; i++)
            {
                Console.WriteLine("게임 개발 잘 됐으면 좋겠다");
            }
            string[] arr = new string[] { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
            foreach (string i in arr)
            {
                Console.WriteLine(i);
            }
            Console.Write("소수 판별기임. 판별할 수 입력 : ");
            int num = int.Parse(Console.ReadLine());
            for (int i = 2; i < num; i++)
            {
                if ((num % i) == 0)
                {
                    Console.WriteLine("소수 아님");
                    break;
                }
                else if (i != num - 1)
                {
                    continue;
                }
                Console.WriteLine("소수임");
            }
        }
    }
}