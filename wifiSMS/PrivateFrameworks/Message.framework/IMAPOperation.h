/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString;



@interface IMAPOperation : NSObject 
{
    unsigned int _type : 8;
    unsigned int _temporaryUids : 1;
    NSString *_mailboxName;
    union { 
        struct { 
            NSArray *trueFlags; 
            NSArray *falseFlags; 
            struct __CFArray {} *uids; 
        } store; 
        struct { 
            NSUInteger uid; 
            NSArray *flags; 
            NSInteger internalDate; 
            NSUInteger size; 
        } append; 
        struct { 
            struct __CFArray {} *srcUids; 
            struct __CFArray {} *dstUids; 
            NSString *destinationMailbox; 
        } copy; 
    } _opSpecific;
}

+ (id)deserializeFromData:(id)arg1 cursor:(NSUInteger*)arg2;

- (unsigned char)_magic;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(NSUInteger*)arg2;
- (void)serializeIntoData:(id)arg1;
- (id)initWithMailboxToCreate:(id)arg1;
- (id)initWithMailboxToDelete:(id)arg1;
- (id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4;
- (id)initWithUidsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(NSUInteger)arg4;
- (id)initWithAppendedUid:(NSUInteger)arg1 approximateSize:(NSUInteger)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5;
- (void)dealloc;
- (BOOL)isSourceOfTemporaryUid:(NSUInteger)arg1;
- (BOOL)actsOnTemporaryUid:(NSUInteger)arg1;
- (void)expungeTemporaryUid:(NSUInteger)arg1;
- (NSUInteger)firstTemporaryUid;
- (NSUInteger)lastTemporaryUid;
- (NSInteger)operationType;
- (id)mailboxName;
- (NSUInteger)approximateSize;
- (BOOL)usesRealUids;
- (void)setUsesRealUids:(BOOL)arg1;
- (id)flagsToSet;
- (id)flagsToClear;
- (id)uids;
- (id)flags;
- (id)internalDate;
- (NSUInteger)uid;
- (id)sourceUids;
- (id)destinationUids;
- (id)destinationMailbox;
- (NSUInteger)sourceUidForTemporaryUid:(NSUInteger)arg1;
- (BOOL)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(NSUInteger)arg3;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(NSUInteger)arg3;
- (id)description;

@end
