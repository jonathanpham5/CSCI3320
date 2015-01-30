//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Megan Pham on 1/30/15.
//  Copyright (c) 2015 Jonathan Pham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
