/**
 * Fine calculator class definition.
 *
 * Ian Nelson
 * CMIS315
 * Project 1
 * Jeff H. Sanford
 */
class FineCalculator {
	public:
		FineCalculator(int courtFees);
		int getFine(int zone, int speedLimit, int actualSpeed) const;
	private:
		int _courtFees;
};