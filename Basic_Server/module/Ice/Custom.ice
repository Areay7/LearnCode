// Custom.ice

module Custom
{
    interface Echo
    {
        void echoMessage(int n);
    };

    interface Web
    {
        void getUrl(string s);
    };
};

module Printer
{
    interface Print
    {
        void printSomething(string s);
    };
};
