//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSDictionary, NSURL;

@interface ICStoreHLSAssetInfo : NSObject <NSCopying>
{
    NSDictionary *_itemResponseDictionary;
    _Bool _isiTunesStoreStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSURL *_playlistURL;
}

@property(copy, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(copy, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property(nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream; // @synthesize iTunesStoreStream=_isiTunesStoreStream;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemResponseDictionary:(id)arg1;

@end

