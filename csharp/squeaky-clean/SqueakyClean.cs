using System.Linq;

public static class Identifier
{
    public static string Clean(string identifier)
    {
        bool convertToCamelCase = false;
        string transmogrify(char c)
        {
            if (char.IsWhiteSpace(c))
            {
                return "_";
            }
            if (char.IsControl(c))
            {
                return "CTRL";
            }
            if (c.Equals('-'))
            {
                convertToCamelCase = true;
                return "";
            }
            if (convertToCamelCase)
            {
                convertToCamelCase = false;
                return c.ToString().ToUpperInvariant();
            }
            if (char.IsBetween(c, 'α', 'ω'))
            {
                return "";
            }
            if (char.IsLetter(c))
            {
                return c.ToString();
            }
            return "";
        }
        return string.Concat(identifier.Select(transmogrify));
    }
}
