//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface TXRDeferredElementInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    NSMutableArray *_faces;
}

@property(readonly, nonatomic) NSMutableArray *faces; // @synthesize faces=_faces;
- (void).cxx_destruct;
- (id)initAsCubemap:(_Bool)arg1;

@end

