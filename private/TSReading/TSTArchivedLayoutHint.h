//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSDArchivedHint-Protocol.h>

@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSTLayoutHint *mHint;
}

@property(retain, nonatomic) TSTLayoutHint *hint; // @synthesize hint=mHint;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

