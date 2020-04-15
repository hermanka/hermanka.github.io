int main()
{
    int arr[100], req;
    // mencari panjang indeks array
    int length = sizeof(arr) / sizeof(*arr);

    cout << "Deret bilangan :";
    cout << endl;

    // Membuat deret bilangan acak dari 1-199
    for(int i=0; i < length; i++){
        arr[i] = rand() % 199;
        cout << arr[i] << " ";
    }

    cout<<endl;
    cout<<"Input bilangan yang ingin dicari : ";
    cin>>req;
    cout<<endl;

    int result = binarySearch(arr, 0, n - 1, req);
	(result == -1) ? cout << "Bilangan tidak ditemukan."
				: cout << "Bilangan ditemukan pada indeks ke-" << result;

    return 0;

}

