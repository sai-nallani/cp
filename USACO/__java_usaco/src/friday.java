/*
ID: sai.s.n1
LANG: JAVA
TASK: friday
*/

import java.util.*;
import java.io.*;

public class friday {
    static String[] MONTHS = new String[]{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    static String[] DAYS = new String[]{"Sat", "Sun", "Mon", "Tues", "Wed", "Thu", "Fri"};

    static class Date {
        int month, day, year;
        boolean isLeap;
        int weekday = 2;

        Date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }

        boolean equalsTo(Date d) {
            return d.month == this.month && d.day == this.day && d.year == this.year;
        }

        String intDate() {
            return String.format("%d/%d/%d", month, day, year);
        }

        String wordDate() {
            String today = String.format("%s %d, %d", MONTHS[month - 1], day, year);
            return today;
        }

        private int limit() {
            int limit = 31;
            if (month == 2) {
                if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0)) {
                    limit = 29;
                } else {
                    limit = 28;
                }
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                limit = 30;
            }
            return limit;
        }

        void increaseDay() {
            day += 1;
            weekday += 1;
            if (weekday > 6) {
                weekday = 0;
            }
            if (day > limit()) {
                day = 1;
                month += 1;
                if (month > 12) {
                    month = 1;
                    year += 1;
                }
            }

        }

        void decreaseDay() {
            day -= 1;
            weekday -= 1;
            if (weekday < 0) {
                weekday = 6;
            }
            if (day <= 0) {
                month -= 1;
                if (month <= 0) {
                    month = 12;
                    year -= 1;
                }
                day = limit();
            }
        }

        void increaseMonth() {
            if (month < 12) {
                month += 1;
            } else if (month == 12) {
                month = 1;
                year += 1;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("inputs/friday.in"));
        PrintWriter pw = new PrintWriter(new FileWriter("friday.out"));
        int n = Integer.parseInt(br.readLine());
        Date currentDay = new Date(1, 1, 1900);
        Date end = new Date(12, 14, 1899 + n);
        int[] counts = new int[]{0, 0, 0, 0, 0, 0, 0};
        while (!(currentDay.equalsTo(end))) {
            if (currentDay.day == 13) {
                System.out.println(currentDay.intDate());
                System.out.println(DAYS[currentDay.weekday]);
                counts[currentDay.weekday] += 1;
            }
            currentDay.increaseDay();
        }
        System.out.println(Arrays.toString(counts));
        String result = String.format("Sat:%d Sun:%d Mon:%d Tue:%d Wed:%d Thu:%d Fri:%d", counts[0], counts[1], counts[2], counts[3], counts[4], counts[5], counts[6]);
        System.out.println(result);
        pw.println(result);
        pw.close();
    }
}
