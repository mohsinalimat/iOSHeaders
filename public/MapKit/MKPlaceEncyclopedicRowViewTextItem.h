//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKPlaceEncyclopedicRowViewItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicRowViewTextItem : NSObject <MKPlaceEncyclopedicRowViewItem>
{
    NSString *label;
    id value;
}

+ (id)textItemWithLabel:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) id value; // @synthesize value;
@property(readonly, nonatomic) NSString *label; // @synthesize label;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

