//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

__attribute__((visibility("hidden")))
@interface _CNOnEmptyObservable : CNObservable
{
    id <CNObservable> _observable;
    id <CNObservable> _nextObservable;
    _Bool _observableIsEmpty;
}

@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (void).cxx_destruct;
- (id)subscribeNextObservable:(id)arg1;
- (_Bool)isObservableEmpty;
- (void)observableDidSendResult;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;

@end

