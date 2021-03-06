//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/UITableViewDataSource-Protocol.h>

@class NSIndexPath, NSString, UITableView;

@protocol UITableViewDataSourcePrivate <UITableViewDataSource>
- (void)tableView:(UITableView *)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg2;

@optional
- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(long long)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
@end

