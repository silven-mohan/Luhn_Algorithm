int Luhn_Algorithm()
{
	int i, k, digit, value=0, f=0, len;
	char num[20];
	printf("Enter the number:");
	scanf("%s", &num);
	len=strlen(num);
	// Length Check
	if(len!=16)
	{
		printf("Enter a valid 16-digit number.");
		return 0;
	}
	// Check for Invalid Characters
	for(i=0;i<=(len-1);i++)
	{
		if((isdigit(num[i]))==0)
		{
			printf("Invalid Character %c. Enter a valid 16-digit number only.", num[i]);
			return 0;
		}
	}
	// Main Logic
	for(i=0;i<=14;i=i+2)
	{
		digit=(num[i]-'0');
		k=digit*2;
		if(k>9)
		{
			k=k-9;
		}
		value=value+k;
	}
	for(i=1;i<=15;i=i+2)
	{
		digit=(num[i]-'0');
		value=value+digit;
	}
	if((value%10)==0)
	{
		printf("%s passes Luhn's Algorithm'.", num);
	}
	else
	{
		printf("%s does not pass Luhn's Algorithm'.", num);
	}
	return 0;
}
