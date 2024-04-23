import tkinter as tk
from tkinter import ttk

def sum_of_digits(number):
    # Function to calculate the sum of digits of a number
    while number >= 10:
        sum_digits = 0
        while number > 0:
            digit = number % 10
            sum_digits += digit
            number //= 10
        number = sum_digits
    return number

def update_clock():
    global current_hour, num_hours
    current_hour += 1
    if current_hour > num_hours:
        return
    clock_label.config(text=f"Time: {current_hour:02}:00")
    if current_hour % 3 == 0:
        sum_digits = sum_of_digits(current_hour)
        sum_display.insert(tk.END, f"Time: {current_hour:02}:00, Sum of Digits: {sum_digits}\n")
    root.after(1000, update_clock)

def start_simulation():
    global current_hour, num_hours
    num_hours = int(hours_entry.get())
    current_hour = 0
    start_button.config(state=tk.DISABLED)
    update_clock()

# Create the main window
root = tk.Tk()
root.title("Hourly Sum Display")

# Create and place widgets
hours_label = ttk.Label(root, text="Enter number of hours:")
hours_label.pack(pady=10)

hours_entry = ttk.Entry(root)
hours_entry.pack()

start_button = ttk.Button(root, text="Start Simulation", command=start_simulation)
start_button.pack(pady=10)

clock_label = ttk.Label(root, font=("Helvetica", 24))
clock_label.pack(pady=20)

sum_display = tk.Text(root, width=40, height=10, font=("Helvetica", 14))
sum_display.pack(padx=20, pady=10)

root.mainloop()
