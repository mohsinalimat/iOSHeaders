//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionListDataSource-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol CNUIUserActionDisambiguationView;

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
- (UIImage *)contactActionsView:(id <CNUIUserActionDisambiguationView>)arg1 imageForActionCategory:(NSString *)arg2;
- (NSArray *)categoriesForContactActionsView:(id <CNUIUserActionDisambiguationView>)arg1;
@end

