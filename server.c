
int sockfd;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == 0)
	{
		printf("Zaba successfuly ON");
	}
	else if (sockfd == -1) {
		printf("Ydak fzab");
	}
}
