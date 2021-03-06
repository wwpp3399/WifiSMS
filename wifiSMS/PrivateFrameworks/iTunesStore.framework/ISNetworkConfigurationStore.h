/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISNetworkConfigurationStore : NSObject 
{
    struct __CFDictionary { } *_configurations;
}

+ (id)currentStore;
+ (void)setCurrentStore:(id)arg1;
+ (id)activeConfiguration;

- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)configurationForNetworkType:(NSUInteger)arg1;
- (NSUInteger)minimumNetworkTypeForAssetType:(NSInteger)arg1 fileSize:(long long)arg2;

@end
