//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HFSection : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_footerTitle;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

