package parsinglogfiles

import "regexp"

// https://regex101.com/?!

func IsValidLine(text string) bool {
	re := regexp.MustCompile(`^\[(TRC|DBG|INF|WRN|ERR|FTL)\].*`)
	return re.MatchString(text)
}

func SplitLogLine(text string) []string {
	re := regexp.MustCompile(`\<(~|\*|=|-)*\>`)
	return re.Split(text, -1)
}

func CountQuotedPasswords(lines []string) int {
	re := regexp.MustCompile(`(?i).*".*password.*".*`)
	count := 0
	for _, line := range lines {
		if re.MatchString(line) {
			count += 1
		}
	}

	return count
}

func RemoveEndOfLineText(text string) string {
	re := regexp.MustCompile(`end-of-line\d*`)
	return re.ReplaceAllString(text, "")
}

func TagWithUserName(lines []string) []string {
	re := regexp.MustCompile(`User\s+(\S*)`)
	newLines := []string{}
	for _, line := range lines {
		if !re.MatchString(line) {
			newLines = append(newLines, line)
			continue
		}

		username := re.FindStringSubmatch(line)[1]
		newLines = append(newLines, "[USR] "+username+" "+line)
	}

	return newLines
}
