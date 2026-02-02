
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        int[] cool = {0,2,5,3,7,8,4};
        return cool;
    }

    public int getToday() {
        return birdsPerDay[birdsPerDay.length-1];
    }

    public void incrementTodaysCount() {
        birdsPerDay[birdsPerDay.length-1] += 1;
    }

    public boolean hasDayWithoutBirds() {
        for (int i:birdsPerDay) {
            if (i==0) {
                return true;
            }else {
                continue;
            }
        }
        return false;
    }
    

    public int getCountForFirstDays(int numberOfDays) {
        if (numberOfDays > 7) {
            numberOfDays = 7;
        }
        int n = 0;
        for (int i=0;i<numberOfDays;i++) {
            n += birdsPerDay[i];
        }
        return n;
    }

    public int getBusyDays() {
        int c =0;
        for (int i:birdsPerDay) {
            if (i>=5) {
                c++;
            }
        }
        return c;
    }
}
