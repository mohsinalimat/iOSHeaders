//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKAppDocument, NSArray, NSDictionary;

@protocol IKAppNavigationController <NSObject>
- (NSArray *)documents;
- (void)removeDocument:(IKAppDocument *)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(IKAppDocument *)arg1;
- (void)popDocument;
- (void)replaceDocument:(IKAppDocument *)arg1 withDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)insertDocument:(IKAppDocument *)arg1 beforeDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)pushDocument:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;

@optional
- (void)dismissModal;
- (void)presentModal:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;
- (void)clear;
@end

