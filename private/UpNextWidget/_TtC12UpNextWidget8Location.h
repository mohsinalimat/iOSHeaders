//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _TtC12UpNextWidget8Location : NSObject
{
    // Error parsing type: , name: title
    // Error parsing type: , name: address
    // Error parsing type: , name: coordinate
    // Error parsing type: , name: radius
    // Error parsing type: , name: mapItemHandle
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
@property(nonatomic, readonly) NSString *shallowDescription;
@property(nonatomic, readonly) _Bool hasKnownSpatialData;
@property(nonatomic, copy) NSData *mapItemHandle; // @synthesize mapItemHandle;
@property(nonatomic, copy) NSString *address; // @synthesize address;
@property(nonatomic, copy) NSString *title; // @synthesize title;

@end

