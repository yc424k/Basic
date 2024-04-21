class Solution
{
    class Car
    {
        private void PrivateM(){}
        public void PublicM(){}
        protected void ProtectedM(){}

        public void TestA()
        {
            PrivateM();
            PublicM();
            ProtectedM();
        }
    }

    class Sedan : Car
    {
        // private 접근제한자는 자신의 클래스에서만 사용 가능
        public void TestB()
        {
            PublicM();
            ProtectedM();
        }
        
    }

    static void Main(string[] args)
    {
        Sedan sd = new Sedan();
        sd.PublicM(); // Car 클래스 외부에서는 public만 허용
    }
}