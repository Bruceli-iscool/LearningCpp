class AnnalynsInfiltration {
    public static boolean canFastAttack(boolean knightIsAwake) {
        if (knightIsAwake) {
            return false;
        }
        return true;
    }

    public static boolean canSpy(boolean knightIsAwake, boolean archerIsAwake, boolean prisonerIsAwake) {
        if (knightIsAwake) {
            return true;
        } else if (archerIsAwake) {
            return true;
        } else if (prisonerIsAwake) {
            return true;
        }
        return false;
    }

    public static boolean canSignalPrisoner(boolean archerIsAwake, boolean prisonerIsAwake) {
        if (prisonerIsAwake&&!archerIsAwake) {
            return true;
        }
        return false;
    }

    public static boolean canFreePrisoner(boolean knightIsAwake, boolean archerIsAwake, boolean prisonerIsAwake, boolean petDogIsPresent) {
        if (petDogIsPresent&&knightIsAwake&&prisonerIsAwake&&!archerIsAwake) {
            return true;
        } else if (petDogIsPresent&&knightIsAwake&&!prisonerIsAwake&&!archerIsAwake) {
            return true;
        }else if (petDogIsPresent&&!knightIsAwake&&!prisonerIsAwake&&!archerIsAwake) {
            return true;
        }else if (prisonerIsAwake&&petDogIsPresent&&!archerIsAwake&&!knightIsAwake) {
            return true;
        }else if (prisonerIsAwake&&!petDogIsPresent&&!archerIsAwake&&!knightIsAwake) {
            return true;
        }else if (knightIsAwake&&archerIsAwake&&prisonerIsAwake&&petDogIsPresent) {
            return false;
        }
        return false;
    }
}
