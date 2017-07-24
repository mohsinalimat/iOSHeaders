//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, UITableView;
@protocol UIDragSession;

@protocol UITableViewDragSourceDelegate <NSObject>

@optional
- (long long)_tableView:(UITableView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)_tableView:(UITableView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint)arg4;
- (NSArray *)_tableView:(UITableView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

