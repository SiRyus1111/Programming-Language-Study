using System;

public class LoopsDemo : IExample
{
    public string Name => "반복문 데모";

    public void Run()
    {
        int count = 5;
        while (count > 0)
        {
            Console.WriteLine("tlqkf");
            count--;
            if (count == 3) break;
        }
    }
}
