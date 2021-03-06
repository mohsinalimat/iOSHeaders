//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFEventBuilder.h>

#import <Home/HFTimeEventBuilder-Protocol.h>

@class NSDateComponents, NSString;

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder>
{
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
}

@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)performValidation;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)buildNewEventFromCurrentState;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

