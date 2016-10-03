# WIREWORLD

As defined in the [wikipedia](https://en.wikipedia.org/wiki/Wireworld), Wireworld is a cellular automaton proposed by Brian Silverman in 1987. It is suited to simulating logic gates and is [turing-complete](https://en.wikipedia.org/wiki/Turing-complete).

## Objective

My goal with this project is pretty simple and straightforward. I want to practice my developing skills, explore functionalities in several languages, not taking into account if any of them is particularly outdated (such as simple graphics rendering), as even if the technology itself may be outdated, the algorithms applied on it can be very useful and thoroughly used nowadays in other situations or more intense, power demanding or scientific computing.  
I also think that the usage of the applications built in this project may be useful for educational purposes when studying specific language aspects, in order to find out which ones are better suited for different purposes, while some can be more efficient for a certain task, such as C for performing intense hardware activity, but others could be more appropriate for other tasks, like Python for lists manipulation and numeric and scientific computing.

## Challenges

I think that the biggest challenge that I'm going to face while working in this project will be to learn different programming languages. I'm starting the project only with C and Python, that are the ones that, at this moment, I feel more comfortable working with (that is the case of Python) and are more challenging and interesting for me (in this case, C). In the future, I want to add languages with different characteristics, like different paradigms, different applications and platforms. It will be great if I can build applications to work in multiple operating systems, mobile and desktop, in the browser and wherever it is possible (graphing calculators, why not?)

## The Algorithm

As mentioned in the beginning, Wireworld is a cellular automaton. This means that it consists of several aligned cells that can have multiple states and interact in steps, called 'generations' or 'ticks'. After every generation, each cell follows a series of rules to determine which will be its state in the next moment. The rules that guide the cells in Wireworld are the following:

- There are four types of cells:
  - Blanks
  - Conductors
  - Heads
  - Tails
- Every head will become a tail
- Every tail will become a conductor cell
- Every conductor surrounded by one or two heads become a head, remains conductor otherwise
- Blanks do not interact with the other cells

This small set of rules is everything that we need to make the Wireworld exist. All of its behaviors are based on these rules.

## Goals

There are no final goals for this project. There is no due date or deadline, it will be done as my time allows it and as I want to keep working on it. Actually, I think that the main goal is to keep something for my future self to take a look and either be proud or be ashamed, but anyway to be a sort of time capsule of how I used to write code, how I used to think and how was my focus and will to work on personal projects in different moments of my life.

***

This document will be updated occasionally, following future updates, new ideas and anything else that may appear. So, without furter ado, let's code!
