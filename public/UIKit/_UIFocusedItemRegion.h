//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

@protocol UIFocusItem;

@interface _UIFocusedItemRegion : _UIFocusRegion
{
    id <UIFocusItem> _item;
}

@property(readonly, nonatomic) __weak id <UIFocusItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_canOccludeRegionsBelow;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end

