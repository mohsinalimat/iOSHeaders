//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAUTSContentShelf : SAAceView
{
}

+ (id)contentShelfWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contentShelf;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *contentHead;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

