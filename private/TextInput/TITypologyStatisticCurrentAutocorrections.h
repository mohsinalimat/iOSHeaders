//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TITypologyStatistic.h>

@class TIAutocorrectionList;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic
{
    TIAutocorrectionList *_autocorrections;
}

@property(retain, nonatomic) TIAutocorrectionList *autocorrections; // @synthesize autocorrections=_autocorrections;
- (void)visitRecordAutocorrections:(id)arg1;
- (void)dealloc;

@end

