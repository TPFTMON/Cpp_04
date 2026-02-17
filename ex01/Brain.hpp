#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

// Messages:
# define BRAIN_MSG "\e[0;32mBrain\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "

# define FILL_BRAIN_MSG "\e[0;35mfillBrainWithIdeas member function\e[0m called of "
# define DISPLAY_IDEAS_MSG "\e[0;35mdisplayIdeas member function\e[0m called of "

// Class implementations:
class Brain{

    static const int MAX_IDEAS = 100;

    private:
        std::string _ideas[MAX_IDEAS];

    public:
        Brain();
        Brain(const Brain &to_copy);
        Brain& operator=(const Brain &assign);
        ~Brain();

        void fillBrainWithIdeas(std::string idea);
        void displayIdeas() const;

};

#endif
