class time {

        public:
                time(int s, int m, int h); //overrides the top one since the to$
                ~time(); //destructor.
		
		int getHour() {
			return hours;
		}
		int getMinutes() {
			return minutes;	
		}
		int getSeconds() {
			return seconds;	
		}

		void setHour(int hours);
		void setMinutes(int minutes);
		void setSeconds(int seconds);

        private:
                int hours;
                int seconds;
                int minutes;

