class Train:
    def __init__(self,seats):
        self.remaining_seats = []
        self.booked_seats = []
        for seat in range(seats):
            self.remaining_seats.append("l"+str(seat+1))
    def bookSeat(self):
        if(len(self.remaining_seats)):
            self.chooseSeat()
            print("Thank you for booking a seat with us.  "+
            f"Your seat number is {self.chosen_seat}")
            (self.remaining_seats).remove(self.chosen_seat)
            (self.booked_seats).append(self.chosen_seat)
        else: print("Sorry, no seats remain. Kindly try in Tatkal.")
    def getStatus(self):
        print(f"Seats remaining are: {self.remaining_seats}")
    def getFare(self):
        print("Fare charges for one seat are: 1000")
    def chooseSeat(self):
        print("The following seats are available: "+str(self.remaining_seats))
        self.chosen_seat = input("Your choice: ")
        if (self.chosen_seat).lower() in self.remaining_seats:
            print("Choice accepted!\nBooking...")
        else: 
            print("Choose again!")
            self.chooseSeat()
    def cancelSeat(self):
        allotted_seat = input("Enter your seat to cancel: ")
        if allotted_seat.lower() in self.booked_seats:
            print(f"Congrats! Your seat: {allotted_seat} has been cancelled.")
            (self.booked_seats).remove(allotted_seat)
            (self.remaining_seats).insert(int(allotted_seat[1:])-1,allotted_seat)
        else: 
            print("Couldn't find such seat!")
            self.cancelSeat()

train1 = Train(12)
#train1.getStatus()
train1.bookSeat()
train1.cancelSeat()
train1.getStatus()