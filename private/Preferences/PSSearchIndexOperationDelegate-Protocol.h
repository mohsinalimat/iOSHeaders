//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifierObserver-Protocol.h>

@class NSArray, PSSearchIndexOperation;
@protocol PSSpecifierDataSource;

@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
- (void)searchIndexOperationDidFinish:(PSSearchIndexOperation *)arg1 searchEntries:(NSArray *)arg2;
- (void)searchIndexOperation:(PSSearchIndexOperation *)arg1 didFindSpecifierDataSource:(id <PSSpecifierDataSource>)arg2;

@optional
- (void)searchIndexOperationDidCancel:(PSSearchIndexOperation *)arg1;
@end

