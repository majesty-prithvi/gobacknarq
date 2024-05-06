We all know that the Data Link Layer (DLL) in the OSI model is responsible for the flow and error control of the data that is sent from sender to receiver. This flow and error control mechanism follows some set of rules/protocols. We will be discussing flow control protocols in this article.

The flow control protocols are generally divided into two categories i.e.

Stop and wait protocol
Sliding window protocol.
The difference between these two categories of flow control protocols is that in the stop and wait protocol, only one data frame is sent at a time from sender to receiver. While in sliding window protocol, multiple frames can be sent at a time from sender to receiver.

Go Back N ARQ is a sliding window protocol which is used for flow control purposes. Multiple frames present in a single window are sent together from sender to receiver.

Pipelining is allowed in the Go Back N ARQ protocol. Pipelining means sending a frame before receiving the acknowledgment for the previously sent frame.

In this article, we will discuss all the important concepts related to the Go Back N ARQ protocol in detail.

Sender Window and Receiver Window in Go-Back-N ARQ Protocol
The sender window is a fixed-sized window that defines the number of frames that are transmitted from sender to receiver at once. The integer 'N' in the Go Back 'N' is the frame size.

For example in Go Back 4 ARQ, the size of the sender window is 4.

Sender window and Receiver window

The Receiver window in the Go Back N ARQ protocol is always of size 1. This means that the receiver takes at most 1 frame at a single time.

Working of Go-Back-N ARQ Protocol
Given below are the steps to clearly explain how the Go Back N ARQ algorithm works.

1. Data packets are divided into multiple frames. Each frame contains information about the destination address, the error control mechanism it follows, etc. These multiple frames are numbered so that they can be distinguished from each other.

Data packets divided into multiple frames

2. The integer 'N' in Go Back 'N' ARQ tells us the size of the window i.e. the number of frames that are sent at once from sender to receiver. Suppose the window size 'N' is equal to 4. Then, 4 frames (frame 0, frame 1, frame 2, and frame 3) will be sent first from sender to receiver.

Working of Go-Back-N ARQ Protocol

3. The receiver sends the acknowledgment of frame 0. Then the sliding window moves by one and frame 4 is sent.

Receiver sends the acknowledgment of frame 0

4. The receiver sends the acknowledgment of frame 1. Then the sliding window moves by one and frame 3 is sent.

Receiver sends the acknowledgment of frame 1

5. The sender waits for the acknowledgment for a fixed amount of time. If the sender does not get the acknowledgment for a frame in time, it considers the frame to be corrupted. Then the sliding window moves to the start of the corrupted frame and all the frames in the window are retransmitted.

For example, if the sender does not receive the acknowledgment for frame 2, it retransmits all the frames in the windows i.e. frames [2, 3, 4, 5].

another Working of Go-Back-N ARQ Protocol

Characteristics of Go-Back-N ARQ
Given below are the characteristics of the Go-Back-N ARQ protocol.

The size of the sender window in Go Back N ARQ is equal to N.
The size of the receiver window in Go Back N ARQ is equal to 1.
When the acknowledgment for one frame is not received by the sender or the frames received by the receiver are out of order, then the whole window starting from the corrupted frame is retransmitted.
Go-Back-N ARQ follows the principle of pipelining i.e. a frame can be sent by the sender before receiving the acknowledgment of the previously sent frame.

Advantages of Go-Back-N ARQ
Given below are some of the advantages of Go Back N ARQ.

1. It can send multiple frames at once. 2. Pipelining is present in the Go-Back-N ARQ i.e. a frame can be sent by the sender before receiving the acknowledgment of the previously sent frame. This results in a shorter waiting time for the frame. 3. It handles corrupted as well as out-of-order frames which result in minimal frame loss.

Disadvantages of Go-Back-N ARQ
Given below are some of the disadvantages of Go Back N ARQ.

1. If acknowledgment for a frame is not received, the whole window of frames is retransmitted instead of just the corrupted frame. This makes the Go Back N ARQ protocol inefficient.
2. Retransmission of all the frames on detecting a corrupted frame increases channel congestion and also increases the bandwidth requirement.
3. It is more time-consuming because while retransmitting the frames on detecting a corrupted frame, the error-free frames are also transmitted.
