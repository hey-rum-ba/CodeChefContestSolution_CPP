int X, Y;
        cin >> X >> Y;
        int gcd = __gcd(X, Y);
        cout << min(X / gcd, Y / gcd) - 1 << endl;