//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSSecureCoding-Protocol.h>

@class ICDataPersister, NSData;

@interface ICNotePasteboardData : NSObject <NSSecureCoding>
{
    NSData *_attributedStringData;
    ICDataPersister *_dataPersister;
}

+ (_Bool)supportsSecureCoding;
+ (id)pasteboardDataFromPersistenceData:(id)arg1;
@property(readonly, nonatomic) ICDataPersister *dataPersister; // @synthesize dataPersister=_dataPersister;
@property(readonly, nonatomic) NSData *attributedStringData; // @synthesize attributedStringData=_attributedStringData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)persistenceData;
- (id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2;
- (id)init;

@end

