/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSString, NSURL;



@interface ISMutableDownloadMetadata : ISDownloadMetadata <NSCoding>
{
    BOOL _artworkIsPrerendered;
    NSString *_bundleID;
    NSURL *_displayableArtworkURL;
    NSString *_downloadKey;
    BOOL _isRental;
    unsigned long long _itemIdentifier;
    NSString *_kind;
    NSString *_playlistName;
    unsigned long long _preOrderIdentifier;
    NSArray *_sinfs;
    NSString *_subtitle;
    NSString *_title;
    NSString *_transactionID;
}

@property(retain) NSString *transactionID; /* unknown property attribute: V_transactionID */
@property(retain) NSString *title; /* unknown property attribute: V_title */
@property(retain) NSString *subtitle; /* unknown property attribute: V_subtitle */
@property(retain) NSArray *sinfs; /* unknown property attribute: V_sinfs */
@property(getter=isRental) BOOL rental; /* unknown property attribute: V_isRental */
@property unsigned long long preOrderIdentifier; /* unknown property attribute: V_preOrderIdentifier */
@property(retain) NSString *playlistName; /* unknown property attribute: V_playlistName */
@property(retain) NSString *kind; /* unknown property attribute: V_kind */
@property unsigned long long itemIdentifier; /* unknown property attribute: V_itemIdentifier */
@property(retain) NSString *downloadKey; /* unknown property attribute: V_downloadKey */
@property(retain) NSURL *displayableArtworkURL; /* unknown property attribute: V_displayableArtworkURL */
@property(retain) NSString *bundleID; /* unknown property attribute: V_bundleID */
@property BOOL artworkIsPrerendered; /* unknown property attribute: V_artworkIsPrerendered */
@property(retain) NSDictionary *dictionary;


- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)transactionID;
- (void)setTransactionID:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)sinfs;
- (void)setSinfs:(id)arg1;
- (BOOL)isRental;
- (void)setRental:(BOOL)arg1;
- (unsigned long long)preOrderIdentifier;
- (void)setPreOrderIdentifier:(unsigned long long)arg1;
- (id)playlistName;
- (void)setPlaylistName:(id)arg1;
- (id)kind;
- (void)setKind:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (id)downloadKey;
- (void)setDownloadKey:(id)arg1;
- (id)displayableArtworkURL;
- (void)setDisplayableArtworkURL:(id)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (BOOL)artworkIsPrerendered;
- (void)setArtworkIsPrerendered:(BOOL)arg1;

@end
