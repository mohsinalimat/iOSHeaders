//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol ASDApplicationProgressDelegate;

@interface ASDApplicationProgress : NSObject
{
    NSString *_bundleID;
    id <ASDApplicationProgressDelegate> _observer;
    NSProgress *_progress;
}

@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <ASDApplicationProgressDelegate> observer; // @synthesize observer=_observer;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_endObservingProgress;
- (void)_beginObservingProgress;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 progress:(id)arg2;

@end

