//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPass.h>

@class NSData, PKBarcode;

@interface PKPass (NanoPassKit)
@property(readonly) _Bool hasLogoImageSet;
- (id)npkCompleteHashForWatchOSVersion:(unsigned long long)arg1;
@property(readonly) NSData *npkCompleteHash;
@property(readonly) _Bool npkExpired;
@property(readonly) _Bool npkSupportsHidingBarcode;
@property(readonly) PKBarcode *npkWatchBarcode;
@property(readonly) _Bool npkHasBarcode;
@end

