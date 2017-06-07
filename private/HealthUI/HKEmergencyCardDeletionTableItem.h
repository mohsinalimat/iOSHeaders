//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class UITableViewCell;
@protocol HKEmergencyCardDeletionDelegate;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    id <HKEmergencyCardDeletionDelegate> _deletionDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardDeletionDelegate> deletionDelegate; // @synthesize deletionDelegate=_deletionDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)title;
- (id)initInEditMode:(_Bool)arg1;

@end

