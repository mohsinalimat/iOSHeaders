//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class ABPeoplePickerNavigationController;

@protocol ABPeoplePickerNavigationControllerDelegate <NSObject>

@optional
- (_Bool)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(const void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(const void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(ABPeoplePickerNavigationController *)arg1;
- (void)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 didSelectPerson:(const void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 didSelectPerson:(const void *)arg2;
@end

