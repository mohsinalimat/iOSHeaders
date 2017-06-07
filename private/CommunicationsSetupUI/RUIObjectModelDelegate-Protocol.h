//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class NSDictionary, NSIndexPath, NSString, NSURL, RUIElement, RUIObjectModel, RUIPage, RUITableView, RUITableViewRow, RUITableViewSection, UINavigationController, UIView, UIViewController;

@protocol RUIObjectModelDelegate <NSObject>
- (UINavigationController *)parentViewControllerForObjectModel:(RUIObjectModel *)arg1;

@optional
- (void)objectModel:(RUIObjectModel *)arg1 pressedButton:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 pressedLink:(NSURL *)arg2 httpMethod:(NSString *)arg3;
- (void)objectModelPressedBack:(RUIObjectModel *)arg1;
- (void)objectModel:(RUIObjectModel *)arg1 willLoadLinkURL:(NSURL *)arg2 attributes:(NSDictionary *)arg3;
- (Class)objectModel:(RUIObjectModel *)arg1 customTableCellClassForTableViewRow:(RUITableViewRow *)arg2;
- (Class)objectModel:(RUIObjectModel *)arg1 customFooterClassForSection:(RUITableViewSection *)arg2;
- (Class)objectModel:(RUIObjectModel *)arg1 customHeaderClassForSection:(RUITableViewSection *)arg2;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableRow:(RUITableViewRow *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableView:(RUITableView *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableSection:(RUITableViewSection *)arg2 page:(RUIPage *)arg3;
- (UIView *)objectModel:(RUIObjectModel *)arg1 tableFooterViewForAttributes:(NSDictionary *)arg2 page:(RUIPage *)arg3;
- (UIView *)objectModel:(RUIObjectModel *)arg1 tableHeaderViewForAttributes:(NSDictionary *)arg2 page:(RUIPage *)arg3;
- (_Bool)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 deletedTableRow:(RUITableViewRow *)arg3 atIndexPath:(NSIndexPath *)arg4 withURL:(NSURL *)arg5 httpMethod:(NSString *)arg6;
- (_Bool)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 deletedTableRow:(RUITableViewRow *)arg3 atIndexPath:(NSIndexPath *)arg4 withName:(NSString *)arg5;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2;
- (void)objectModelDidChange:(RUIObjectModel *)arg1;
- (void)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 toggledEditing:(_Bool)arg3;
- (_Bool)objectModel:(RUIObjectModel *)arg1 shouldDisplayNamedElement:(RUIElement *)arg2 page:(RUIPage *)arg3;
- (_Bool)objectModel:(RUIObjectModel *)arg1 shouldShowModalHTMLViewWithURL:(NSURL *)arg2;
- (void)objectModel:(RUIObjectModel *)arg1 pressedLink:(NSURL *)arg2 httpMethod:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)objectModel:(RUIObjectModel *)arg1 elementDidChange:(RUIElement *)arg2;
- (void)objectModel:(RUIObjectModel *)arg1 didNavigateBackFromController:(UIViewController *)arg2 withGesture:(_Bool)arg3;
- (UIViewController *)viewControllerForAlertPresentation;
@end

