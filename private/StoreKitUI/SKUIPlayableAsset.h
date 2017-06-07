//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SKUIPlayableAsset : NSObject
{
    _Bool _ITunesStream;
    _Bool _shouldUseITunesStoreSecureKeyDelivery;
    NSURL *_contentURL;
    double _initialPlaybackTime;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    double _playbackDuration;
    long long _storeItemIdentifier;
}

@property(nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) _Bool shouldUseITunesStoreSecureKeyDelivery; // @synthesize shouldUseITunesStoreSecureKeyDelivery=_shouldUseITunesStoreSecureKeyDelivery;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(readonly, retain, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(readonly, retain, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property(readonly, nonatomic, getter=isITunesStream) _Bool ITunesStream; // @synthesize ITunesStream=_ITunesStream;
@property(nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)initWithVideo:(id)arg1;
- (id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2;
- (id)initWithContentURL:(id)arg1;
- (id)init;

@end

