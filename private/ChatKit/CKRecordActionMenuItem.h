//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

@interface CKRecordActionMenuItem : CKActionMenuItem
{
    _Bool _wasSelected;
    NSDate *_dateSelected;
}

@property(retain, nonatomic) NSDate *dateSelected; // @synthesize dateSelected=_dateSelected;
@property(nonatomic) _Bool wasSelected; // @synthesize wasSelected=_wasSelected;
- (void).cxx_destruct;
- (void)updateForState:(long long)arg1 touchInside:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

