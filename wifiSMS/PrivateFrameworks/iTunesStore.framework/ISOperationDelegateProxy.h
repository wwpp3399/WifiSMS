/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock;



@interface ISOperationDelegateProxy : NSObject 
{
    id _delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}


- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)sendInvocationToDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(BOOL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
