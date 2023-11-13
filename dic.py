monthconversions = {
    0: "january",
    "feb": "february",
    "mar": "march",
    "apr":"april"
}
monthconversions["apr"] = "changed"
monthconversions['dec'] = "december"
print(monthconversions.get('sep', 'september'))
print(monthconversions["apr"])