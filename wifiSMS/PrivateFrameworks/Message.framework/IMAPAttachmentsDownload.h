/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class LibraryMessage;



@interface IMAPAttachmentsDownload : IMAPCompoundDownload 
{
    LibraryMessage *_message;
}


- (void)dealloc;
- (id)initWithLibraryMessage:(id)arg1;
- (id)message;
- (void)saveCompletedDownloads;

@end
