import pandas as pd
df=pd.read_excel(r'input.xlsx')
print(df)
print("mean:",df["Numbers"].mean())
