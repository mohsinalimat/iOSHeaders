//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContactProperty, CNFuture, CNObservable, CNUIUserActionItem, NSArray, NSString, UIImage;
@protocol CNCancelable, CNCapabilities, CNUIUserActionListConsumer;

@protocol CNUIUserActionListDataSource <NSObject>
+ (NSArray *)allSupportedActionTypesWithCapabilities:(id <CNCapabilities>)arg1;
+ (NSArray *)allSupportedActionTypes;
+ (NSArray *)allActionTypes;
@property(nonatomic) _Bool tracksChanges;
- (CNFuture *)thirdPartyActionsForCurrentContactAndPropertyKey:(NSString *)arg1 identifier:(NSString *)arg2;
- (CNFuture *)thirdPartyActionsForContactProperty:(CNContactProperty *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (UIImage *)consumer:(id <CNUIUserActionListConsumer>)arg1 imageForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForButtonWithDefaultAction:(CNUIUserActionItem *)arg2 actionType:(NSString *)arg3;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedButtonDisplayNameForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForActionType:(NSString *)arg2;
- (CNObservable *)consumer:(id <CNUIUserActionListConsumer>)arg1 actionModelsForActionType:(NSString *)arg2;
- (id <CNCancelable>)consumer:(id <CNUIUserActionListConsumer>)arg1 actionModelsForActionType:(NSString *)arg2 handler:(void (^)(CNUIUserActionListModel *))arg3;
- (NSArray *)actionTypesForConsumer:(id <CNUIUserActionListConsumer>)arg1;
@end

