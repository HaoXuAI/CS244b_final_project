//
// Created by Hao Xu on 11/10/17.
//

class Client {
public:
    Client();

    // send a request (<REQUEST, o, t, c>Cc message) to the primary
    bool send_request(Request *request);

    // receive the reply (<REPLY, v, t, c, i, r>Cc) from replica
    Reply *receive_reply();

    // broadcast requests to all replicas if the client does not receive replies soon enough
    void broadcast();

};