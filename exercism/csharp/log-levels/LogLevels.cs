using System;

static class LogLine
{
    public static string Message(string logLine)
    {
        string split = logLine.Split(": ")[1];
        return split.Trim();
    }

    public static string LogLevel(string logLine)
    {
        string split = logLine.Split(": ")[0].ToLower();
        char[] trimmings = { '[', ']' };
        return split.Trim(trimmings);
    }

    public static string Reformat(string logLine) => $"{Message(logLine)} ({LogLevel(logLine)})";
}
